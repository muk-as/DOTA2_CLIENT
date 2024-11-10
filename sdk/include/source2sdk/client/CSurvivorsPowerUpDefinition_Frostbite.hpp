#pragma once
#include "source2sdk/client/CSurvivorsPowerUpDefinition_InstantAttack.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x798
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsPowerUpDefinition_Frostbite : public client::CSurvivorsPowerUpDefinition_InstantAttack
    {
    public:
        float m_flScepterExplodeRadius; // 0x790        
        [[maybe_unused]] std::uint8_t pad_0x794[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUpDefinition_Frostbite because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUpDefinition_Frostbite) == 0x798);
};
