#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Tinker_Keen_Teleport : public server::CDOTABaseAbility
    {
    public:
        int32_t creep_teleport_level; // 0x5c8        
        int32_t hero_teleport_level; // 0x5cc        
        float outpost_channel_time; // 0x5d0        
        float jungle_outpost_channel_time; // 0x5d4        
        // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTeleportTarget;
        char m_hTeleportTarget[0x4]; // 0x5d8        
        client::ParticleIndex_t m_nFXOrigin; // 0x5dc        
        client::ParticleIndex_t m_nFXDestination; // 0x5e0        
        Vector m_vDestination; // 0x5e4        
        int32_t m_iMinDistance; // 0x5f0        
        float m_flBaseTeleportTime; // 0x5f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Tinker_Keen_Teleport because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Tinker_Keen_Teleport) == 0x5f8);
};
