#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropVariable.hpp"
#include "source2sdk/smartprops/TraceNoHitResult_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x40
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Trace Miss Behavior"
        // static metadata: MPropertyDescription "Specified what to do when a trace does not hit a surface."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropVariable_TraceNoHit : public source2sdk::smartprops::CSmartPropVariable
        {
        public:
            source2sdk::smartprops::TraceNoHitResult_t m_DefaultValue; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropVariable_TraceNoHit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropVariable_TraceNoHit) == 0x40);
    };
};
