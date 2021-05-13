
#include <AzTest/AzTest.h>

class PlaygroundTest
    : public ::testing::Test
{
protected:
    void SetUp() override
    {

    }

    void TearDown() override
    {

    }
};

TEST_F(PlaygroundTest, SanityTest)
{
    ASSERT_TRUE(true);
}

AZ_UNIT_TEST_HOOK();
