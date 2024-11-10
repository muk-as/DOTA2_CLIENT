#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "Vector m_vStartLocation"
    #pragma pack(push, 1)
    class CDOTA_Ability_Ringmaster_TameTheBeasts : public server::CDOTABaseAbility
    {
    public:
        Vector m_vCrackLocation; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5d4[0x4]; // 0x5d4
        server::CDOTA_BaseNPC* m_pTarget; // 0x5d8        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x5e0        
        client::ParticleIndex_t m_nAvailableAOEFXIndex; // 0x5e4        
        client::ParticleIndex_t m_nFinalAOEFXIndex; // 0x5e8        
        client::ParticleIndex_t m_nWhipAOEFXIndex; // 0x5ec        
        bool m_bWhiped; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f1[0x3]; // 0x5f1
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x5f4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSetStartLocation"
        Vector m_vStartLocation; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Ringmaster_TameTheBeasts because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Ringmaster_TameTheBeasts) == 0x608);
};
