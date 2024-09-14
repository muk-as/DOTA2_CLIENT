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
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flChannelTime"
    #pragma pack(push, 1)
    class CDOTA_Ability_AbyssalUnderlord_Portal_Warp : public server::CDOTABaseAbility
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x5a0        
        // metadata: MNetworkEnable
        float m_flChannelTime; // 0x5a4        
        // m_hSpawnUnderlingThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSpawnUnderlingThinker;
        char m_hSpawnUnderlingThinker[0x4]; // 0x5a8        
        // m_hWarrior has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hWarrior;
        char m_hWarrior[0x4]; // 0x5ac        
        // m_hArcher has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hArcher;
        char m_hArcher[0x4]; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AbyssalUnderlord_Portal_Warp because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AbyssalUnderlord_Portal_Warp) == 0x5b8);
};
