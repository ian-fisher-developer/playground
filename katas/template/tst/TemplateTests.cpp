#include "../src/Template.h"
#include <gtest/gtest.h>

TEST(Template, IsValid)
{
    Template object;
    EXPECT_EQ(false, object.valid());
}
