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
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_AncientApparition_IceBlast : public server::CDOTABaseAbility
    {
    public:
        server::CountdownTimer m_PathTimer; // 0x5c8        
        Vector m_vTarget; // 0x5e0        
        Vector m_vStartPos; // 0x5ec        
        Vector m_vLastTempViewer; // 0x5f8        
        int32_t m_iTrackerProjectile; // 0x604        
        float path_radius; // 0x608        
        float radius_min; // 0x60c        
        float radius_max; // 0x610        
        float radius_grow; // 0x614        
        float frostbite_duration; // 0x618        
        float target_sight_radius; // 0x61c        
        // m_hFrostbittenEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hFrostbittenEntities;
        char m_hFrostbittenEntities[0x18]; // 0x620        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AncientApparition_IceBlast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AncientApparition_IceBlast) == 0x638);
};
