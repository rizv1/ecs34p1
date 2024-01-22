#include <gtest/gtest.h>
#include "StringUtils.h"


TEST(StringUtilsTest, SliceTest){
    std::string Base = "Hello";

    EXPECT_EQ(StringUtils::Slice(Base,0), "Hello");
    EXPECT_EQ(StringUtils::Slice(Base,1), "ello");
}

TEST(StringUtilsTest, Capitalize){
    std::string Base = "hello";
    EXPECT_EQ(StringUtils::Capitalize(Base), "Hello");
    EXPECT_EQ(StringUtils::Capitalize(std::string()), "");
}

TEST(StringUtilsTest, Upper){
    std::string Base = "hello darkness my old friend";
    EXPECT_EQ(StringUtils::Upper(Base), "HELLO DARKNESS MY OLD FRIEND");
    EXPECT_EQ(StringUtils::Upper(std::string()), "");
}

TEST(StringUtilsTest, Lower){
    std::string Base = "HELLO DARKNESS MY OLD FRIEND";
    EXPECT_EQ(StringUtils::Lower(Base), "hello darkness my old friend");
    EXPECT_EQ(StringUtils::Lower(std::string()), "");
}

TEST(StringUtilsTest, LStrip){
    std::string Base = "    Baboon    ";
    EXPECT_EQ(StringUtils::LStrip(Base), "Baboon    ");
    EXPECT_EQ(StringUtils::LStrip(std::string()), "");
    
}

TEST(StringUtilsTest, RStrip){
    std::string Base = "    Baboon    ";
    EXPECT_EQ(StringUtils::RStrip(Base), "    Baboon");
    EXPECT_EQ(StringUtils::RStrip(std::string()), "");

}

TEST(StringUtilsTest, Strip){
    std::string Base = "    Baboon    ";
    EXPECT_EQ(StringUtils::Strip(Base), "Baboon");
    EXPECT_EQ(StringUtils::Strip(std::string()), "");
}

TEST(StringUtilsTest, Center){
    std::string Base = "OREO";
    EXPECT_EQ(StringUtils::Center(Base, 2, '*'), "OREO");
    EXPECT_EQ(StringUtils::Center(Base, 11, 'x'), "xxxOREOxxxx");
}

TEST(StringUtilsTest, LJust){
    EXPECT_EQ(StringUtils::LJust("OREO", 2, '*'), "OREO");
    EXPECT_EQ(StringUtils::LJust("OREO", 8, 'x'), "OREOxxxx");
}

TEST(StringUtilsTest, RJust){
    EXPECT_EQ(StringUtils::RJust("OREO", 2, '*'), "OREO");
    EXPECT_EQ(StringUtils::RJust("OREO", 8, 'x'), "xxxxOREO");
}

TEST(StringUtilsTest, Replace){
    std::string Base = "good evening mother";
    EXPECT_EQ(StringUtils::Replace(Base, "mother", "father"), "good evening father");
}

TEST(StringUtilsTest, Split){
    
}

TEST(StringUtilsTest, Join){
    
}

TEST(StringUtilsTest, ExpandTabs){
    
}

TEST(StringUtilsTest, EditDistance){
    
}
