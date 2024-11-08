#pragma once
#include "source2sdk/client/CSurvivorsPowerUpDefinition_AreaAttack.hpp"
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
    // Size: 0x878
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsPowerUpDefinition_AreaAttack_Line : public client::CSurvivorsPowerUpDefinition_AreaAttack
    {
    public:
        bool m_bUseFacingDirection; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x871[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUpDefinition_AreaAttack_Line because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUpDefinition_AreaAttack_Line) == 0x878);
};
