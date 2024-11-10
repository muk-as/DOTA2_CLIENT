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
    // Size: 0x670
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_AncientApparition_IceBlast : public client::C_DOTABaseAbility
    {
    public:
        client::CountdownTimer m_PathTimer; // 0x600        
        Vector m_vTarget; // 0x618        
        Vector m_vStartPos; // 0x624        
        Vector m_vLastTempViewer; // 0x630        
        int32_t m_iTrackerProjectile; // 0x63c        
        float path_radius; // 0x640        
        float radius_min; // 0x644        
        float radius_max; // 0x648        
        float radius_grow; // 0x64c        
        float frostbite_duration; // 0x650        
        float target_sight_radius; // 0x654        
        // m_hFrostbittenEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hFrostbittenEntities;
        char m_hFrostbittenEntities[0x18]; // 0x658        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AncientApparition_IceBlast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AncientApparition_IceBlast) == 0x670);
};
