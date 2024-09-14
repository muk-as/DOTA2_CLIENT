#pragma once
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
    // Size: 0x5a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAbilitySoulEntity"
    #pragma pack(push, 1)
    class CDOTA_Ability_Muerta_PartingShot : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_hAbilitySoulEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAbilitySoulEntity;
        char m_hAbilitySoulEntity[0x4]; // 0x5a0        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x5a4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Muerta_PartingShot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Muerta_PartingShot) == 0x5a8);
};
