#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x518
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CLogicAchievement : public server::CLogicalEntity
    {
    public:
        bool m_bDisabled; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e1[0x7]; // 0x4e1
        CUtlSymbolLarge m_iszAchievementEventID; // 0x4e8        
        entity2::CEntityIOOutput m_OnFired; // 0x4f0        
        
        // Datamap fields:
        // void InputFireEvent; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicAchievement because it is not a standard-layout class
    static_assert(sizeof(CLogicAchievement) == 0x518);
};
