#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_AncientApparition_IceBlast : public server::CDOTABaseAbility
    {
    public:
        server::CountdownTimer m_PathTimer; // 0x5a0        
        Vector m_vTarget; // 0x5b8        
        Vector m_vStartPos; // 0x5c4        
        Vector m_vLastTempViewer; // 0x5d0        
        int32_t m_iTrackerProjectile; // 0x5dc        
        float path_radius; // 0x5e0        
        float radius_min; // 0x5e4        
        float radius_max; // 0x5e8        
        float radius_grow; // 0x5ec        
        float frostbite_duration; // 0x5f0        
        float target_sight_radius; // 0x5f4        
        // m_hFrostbittenEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hFrostbittenEntities;
        char m_hFrostbittenEntities[0x18]; // 0x5f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AncientApparition_IceBlast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AncientApparition_IceBlast) == 0x610);
};
