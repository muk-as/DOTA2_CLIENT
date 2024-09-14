#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // Size: 0x648
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_AncientApparition_IceBlast : public client::C_DOTABaseAbility
    {
    public:
        client::CountdownTimer m_PathTimer; // 0x5d8        
        Vector m_vTarget; // 0x5f0        
        Vector m_vStartPos; // 0x5fc        
        Vector m_vLastTempViewer; // 0x608        
        int32_t m_iTrackerProjectile; // 0x614        
        float path_radius; // 0x618        
        float radius_min; // 0x61c        
        float radius_max; // 0x620        
        float radius_grow; // 0x624        
        float frostbite_duration; // 0x628        
        float target_sight_radius; // 0x62c        
        // m_hFrostbittenEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hFrostbittenEntities;
        char m_hFrostbittenEntities[0x18]; // 0x630        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AncientApparition_IceBlast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AncientApparition_IceBlast) == 0x648);
};
