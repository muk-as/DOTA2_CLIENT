#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1840
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bGoldenRoshan"
    #pragma pack(push, 1)
    class CDOTA_Unit_Roshan : public server::CDOTA_BaseNPC_Additive
    {
    public:
        int32_t m_iKillerTeam; // 0x1810        
        int32_t m_iLastHealthPercent; // 0x1814        
        client::ParticleIndex_t m_nFXIndex; // 0x1818        
        [[maybe_unused]] std::uint8_t pad_0x181c[0x4]; // 0x181c
        // m_hAttackingHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAttackingHeroes;
        char m_hAttackingHeroes[0x18]; // 0x1820        
        // metadata: MNetworkEnable
        bool m_bGoldenRoshan; // 0x1838        
        bool m_bIsNightTimeMode; // 0x1839        
        [[maybe_unused]] std::uint8_t pad_0x183a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Roshan because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Roshan) == 0x1840);
};
