#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Creature.hpp"
#include "source2sdk/server/NianDamageTaken_t.hpp"
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
    // Size: 0x19b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Unit_Nian : public server::CDOTA_BaseNPC_Creature
    {
    public:
        // m_vecRecentDamage has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::NianDamageTaken_t> m_vecRecentDamage;
        char m_vecRecentDamage[0x18]; // 0x1990        
        // m_hTail has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTail;
        char m_hTail[0x4]; // 0x19a8        
        // m_hHorn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hHorn;
        char m_hHorn[0x4]; // 0x19ac        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Nian because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Nian) == 0x19b0);
};
