#pragma once
#include "source2sdk/client/CSurvivorsEnemySnapshot.hpp"
#include "source2sdk/client/CSurvivorsPickupSnapshot.hpp"
#include "source2sdk/client/CSurvivorsPlayerSnapshot.hpp"
#include "source2sdk/client/SurvivorsGameModeID_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x78
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsGameSnapshot
    {
    public:
        client::SurvivorsGameModeID_t m_gameModeID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        client::CSurvivorsPlayerSnapshot m_playerSnapshot; // 0x8        
        // m_enemiesSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsEnemySnapshot> m_enemiesSnapshot;
        char m_enemiesSnapshot[0x18]; // 0x40        
        // m_pickupsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsPickupSnapshot> m_pickupsSnapshot;
        char m_pickupsSnapshot[0x18]; // 0x58        
        float m_flGameTime; // 0x70        
        int32_t m_nCurrentLevelEvent; // 0x74        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsGameSnapshot, m_gameModeID) == 0x0);
    static_assert(offsetof(CSurvivorsGameSnapshot, m_playerSnapshot) == 0x8);
    static_assert(offsetof(CSurvivorsGameSnapshot, m_enemiesSnapshot) == 0x40);
    static_assert(offsetof(CSurvivorsGameSnapshot, m_pickupsSnapshot) == 0x58);
    static_assert(offsetof(CSurvivorsGameSnapshot, m_flGameTime) == 0x70);
    static_assert(offsetof(CSurvivorsGameSnapshot, m_nCurrentLevelEvent) == 0x74);
    
    static_assert(sizeof(CSurvivorsGameSnapshot) == 0x78);
};