#pragma once
#include "source2sdk/soundsystem/CSosGroupActionSchema.hpp"
#include "source2sdk/soundsystem/SosActionSortType_t.hpp"
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
    // Size: 0x38
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSosGroupActionSetSoundeventParameterSchema : public soundsystem::CSosGroupActionSchema
    {
    public:
        // metadata: MPropertyFriendlyName "Max Count"
        int32_t m_nMaxCount; // 0x18        
        // metadata: MPropertyFriendlyName "Minimum Value"
        float m_flMinValue; // 0x1c        
        // metadata: MPropertyFriendlyName "Maximum Value"
        float m_flMaxValue; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4]; // 0x24
        // metadata: MPropertyFriendlyName "Parameter Name"
        CUtlString m_opvarName; // 0x28        
        // metadata: MPropertyFriendlyName "Sort Type"
        soundsystem::SosActionSortType_t m_nSortType; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSosGroupActionSetSoundeventParameterSchema because it is not a standard-layout class
    static_assert(sizeof(CSosGroupActionSetSoundeventParameterSchema) == 0x38);
};
