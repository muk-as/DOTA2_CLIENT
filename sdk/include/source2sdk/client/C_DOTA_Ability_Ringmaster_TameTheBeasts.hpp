#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x640
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "Vector m_vStartLocation"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Ringmaster_TameTheBeasts : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vCrackLocation; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x60c[0x4]; // 0x60c
        client::C_DOTA_BaseNPC* m_pTarget; // 0x610        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x618        
        client::ParticleIndex_t m_nAvailableAOEFXIndex; // 0x61c        
        client::ParticleIndex_t m_nFinalAOEFXIndex; // 0x620        
        client::ParticleIndex_t m_nWhipAOEFXIndex; // 0x624        
        bool m_bWhiped; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x629[0x3]; // 0x629
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x62c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSetStartLocation"
        Vector m_vStartLocation; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x63c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Ringmaster_TameTheBeasts because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Ringmaster_TameTheBeasts) == 0x640);
};
