
#include <AzTest/AzTest.h>

class DaoTest
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

TEST_F(DaoTest, SanityTest)
{
    ASSERT_TRUE(true);
}

AZ_UNIT_TEST_HOOK();
