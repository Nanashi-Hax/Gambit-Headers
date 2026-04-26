namespace Sys
{
    class ActorBase
    {
    public:
        struct VTable
        {
            int p0;
            void *completeDtor;
            int p1;
            void *deletingDtor;
        };
    };
}