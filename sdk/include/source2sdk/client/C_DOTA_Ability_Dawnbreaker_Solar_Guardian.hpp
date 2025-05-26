#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x698
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Dawnbreaker_Solar_Guardian : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x680            
            bool m_bJumping; // 0x684            
            uint8_t _pad0685[0x3]; // 0x685
            // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTeleportTarget;
            char m_hTeleportTarget[0x4]; // 0x688            
            source2sdk::client::ParticleIndex_t m_nTPFXIndex; // 0x68c            
            source2sdk::client::ParticleIndex_t m_nAoEFXIndex; // 0x690            
            uint8_t _pad0694[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Dawnbreaker_Solar_Guardian because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Dawnbreaker_Solar_Guardian) == 0x698);
    };
};
