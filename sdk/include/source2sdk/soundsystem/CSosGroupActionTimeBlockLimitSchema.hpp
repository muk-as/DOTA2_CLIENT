#pragma once
#include "source2sdk/soundsystem/CSosGroupActionSchema.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x20
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSosGroupActionTimeBlockLimitSchema : public soundsystem::CSosGroupActionSchema
    {
    public:
        // metadata: MPropertyFriendlyName "Max Count"
        int32_t m_nMaxCount; // 0x18        
        // metadata: MPropertyFriendlyName "Max Time"
        float m_flMaxDuration; // 0x1c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSosGroupActionTimeBlockLimitSchema because it is not a standard-layout class
    static_assert(sizeof(CSosGroupActionTimeBlockLimitSchema) == 0x20);
};
