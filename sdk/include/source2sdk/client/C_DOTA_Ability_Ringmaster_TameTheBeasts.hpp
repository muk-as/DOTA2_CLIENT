#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_BaseNPC;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "Vector m_vStartLocation"
        #pragma pack(push, 1)
        class C_DOTA_Ability_Ringmaster_TameTheBeasts : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vCrackLocation; // 0x5b0            
            uint8_t _pad05bc[0x4]; // 0x5bc
            source2sdk::client::C_DOTA_BaseNPC* m_pTarget; // 0x5c0            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x5c8            
            source2sdk::client::ParticleIndex_t m_nAvailableAOEFXIndex; // 0x5cc            
            source2sdk::client::ParticleIndex_t m_nFinalAOEFXIndex; // 0x5d0            
            source2sdk::client::ParticleIndex_t m_nWhipAOEFXIndex; // 0x5d4            
            bool m_bWhiped; // 0x5d8            
            uint8_t _pad05d9[0x3]; // 0x5d9
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x5dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSetStartLocation"
            Vector m_vStartLocation; // 0x5e0            
            uint8_t _pad05ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Ringmaster_TameTheBeasts because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Ringmaster_TameTheBeasts) == 0x5f0);
    };
};
