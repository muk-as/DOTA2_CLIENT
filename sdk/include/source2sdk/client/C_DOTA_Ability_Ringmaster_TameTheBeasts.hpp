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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            Vector m_vCrackLocation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::C_DOTA_BaseNPC* m_pTarget; // 0x_            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nAvailableAOEFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFinalAOEFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nWhipAOEFXIndex; // 0x_            
            bool m_bWhiped; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSetStartLocation"
            Vector m_vStartLocation; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Ringmaster_TameTheBeasts because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Ringmaster_TameTheBeasts) == 0x_);
    };
};
