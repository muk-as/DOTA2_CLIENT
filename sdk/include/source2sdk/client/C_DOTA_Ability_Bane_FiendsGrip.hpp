#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hGripTarget"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Bane_FiendsGrip : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_hGripTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hGripTarget;
        char m_hGripTarget[0x4]; // 0x600        
        int32_t fiend_grip_damage; // 0x604        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Bane_FiendsGrip because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Bane_FiendsGrip) == 0x608);
};
