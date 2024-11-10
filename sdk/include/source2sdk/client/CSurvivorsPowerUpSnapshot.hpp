#pragma once
#include "source2sdk/client/SurvivorsPowerUpID_t.hpp"
#include "source2sdk/client/SurvivorsUpgradeID_t.hpp"
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
    // Size: 0x28
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsPowerUpSnapshot
    {
    public:
        client::SurvivorsPowerUpID_t m_unPowerUpID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_vecUpgradeIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SurvivorsUpgradeID_t> m_vecUpgradeIDs;
        char m_vecUpgradeIDs[0x18]; // 0x8        
        bool m_bShardUpgraded; // 0x20        
        bool m_bScepterUpgraded; // 0x21        
        [[maybe_unused]] std::uint8_t pad_0x22[0x6];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsPowerUpSnapshot, m_unPowerUpID) == 0x0);
    static_assert(offsetof(CSurvivorsPowerUpSnapshot, m_vecUpgradeIDs) == 0x8);
    static_assert(offsetof(CSurvivorsPowerUpSnapshot, m_bShardUpgraded) == 0x20);
    static_assert(offsetof(CSurvivorsPowerUpSnapshot, m_bScepterUpgraded) == 0x21);
    
    static_assert(sizeof(CSurvivorsPowerUpSnapshot) == 0x28);
};
