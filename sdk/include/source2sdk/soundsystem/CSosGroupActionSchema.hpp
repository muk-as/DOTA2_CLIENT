#pragma once
#include "source2sdk/soundsystem/ActionType_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x18
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyElementNameFn
    #pragma pack(push, 1)
    class CSosGroupActionSchema
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyFriendlyName "Name"
        CUtlString m_name; // 0x8        
        // metadata: MPropertyFriendlyName "Action Type"
        soundsystem::ActionType_t m_actionType; // 0x10        
        // metadata: MPropertySuppressField
        soundsystem::ActionType_t m_actionInstanceType; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSosGroupActionSchema, m_name) == 0x8);
    static_assert(offsetof(CSosGroupActionSchema, m_actionType) == 0x10);
    static_assert(offsetof(CSosGroupActionSchema, m_actionInstanceType) == 0x14);
    
    static_assert(sizeof(CSosGroupActionSchema) == 0x18);
};
