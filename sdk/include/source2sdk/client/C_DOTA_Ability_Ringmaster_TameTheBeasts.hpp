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
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "Vector m_vStartLocation"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Ringmaster_TameTheBeasts : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vCrackLocation; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x4]; // 0x5e4
        client::C_DOTA_BaseNPC* m_pTarget; // 0x5e8        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x5f0        
        client::ParticleIndex_t m_nAvailableAOEFXIndex; // 0x5f4        
        client::ParticleIndex_t m_nFinalAOEFXIndex; // 0x5f8        
        client::ParticleIndex_t m_nWhipAOEFXIndex; // 0x5fc        
        bool m_bWhiped; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x601[0x3]; // 0x601
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x604        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSetStartLocation"
        Vector m_vStartLocation; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Ringmaster_TameTheBeasts because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Ringmaster_TameTheBeasts) == 0x618);
};
