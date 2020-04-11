#include <atomic>
#include "ctagSoundProcessor.hpp"

namespace CTAG {
    namespace SP {
        class ctagSoundProcessorTemplate : public ctagSoundProcessor {
        public:
            virtual void Process(const ProcessData &);

            virtual ~ctagSoundProcessorTemplate();

            ctagSoundProcessorTemplate();

            virtual const char *GetCStrID() const;

        private:
            void setParamValueInternal(const string &id, const string &key, const int val) override;
            void loadPresetInternal() override;

// autogenerated code here
// sectionHpp
// sectionHpp

            // private attributes could go here

        };
    }
}