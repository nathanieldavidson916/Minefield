/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST(FieldTest, isAreaSafeShouldBeFalse){
  Field mineField;
  
  mineField.placeMine(4, 5);
  ASSERT_FALSE(mineField.isSafe(4, 5));
}

TEST(FieldTest, isAreaSafeShouldBeTrue){
  Field mineField;
  
  mineField.placeMine(5, 5);
  ASSERT_TRUE(mineField.isSafe(2, 2));
}

TEST(FieldTest, isAreaSafeOutOfBoundsWithMinePlaced){
  Field mineField;
  mineField.placeMine(10, 10);
  ASSERT_TRUE(mineField.isSafe(20, 20));
}
TEST(FieldTest, isAreaSafeOutOfBoundsWithOutMinePlaced){
  Field mineField;

  ASSERT_TRUE(mineField.isSafe(3, 2));
}
