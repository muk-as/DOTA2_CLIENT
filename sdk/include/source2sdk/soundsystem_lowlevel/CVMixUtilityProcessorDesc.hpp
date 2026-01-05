#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/CVMixBaseProcessorDesc.hpp"
#include "source2sdk/soundsystem_lowlevel/VMixUtilityDesc_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixUtilityProcessorDesc : public source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc
        {
        public:
            source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t m_desc; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVMixUtilityProcessorDesc because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixUtilityProcessorDesc) == 0x_);
    };
};
