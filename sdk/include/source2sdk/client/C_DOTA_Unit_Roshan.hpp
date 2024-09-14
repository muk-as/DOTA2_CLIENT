#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1830
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bGoldenRoshan"
    #pragma pack(push, 1)
    class C_DOTA_Unit_Roshan : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        int32_t m_iKillerTeam; // 0x1800        
        int32_t m_iLastHealthPercent; // 0x1804        
        client::ParticleIndex_t m_nFXIndex; // 0x1808        
        [[maybe_unused]] std::uint8_t pad_0x180c[0x4]; // 0x180c
        // m_hAttackingHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hAttackingHeroes;
        char m_hAttackingHeroes[0x18]; // 0x1810        
        // metadata: MNetworkEnable
        bool m_bGoldenRoshan; // 0x1828        
        bool m_bIsNightTimeMode; // 0x1829        
        [[maybe_unused]] std::uint8_t pad_0x182a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Roshan because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Roshan) == 0x1830);
};
