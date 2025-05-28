#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_AetherRemnantThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1888            
            Vector m_vFacingDir; // 0x188c            
            std::int32_t pierces_creeps; // 0x1898            
            // m_hRemnant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRemnant;
            char m_hRemnant[0x4]; // 0x189c            
            // m_hPartnerRemnant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPartnerRemnant;
            char m_hPartnerRemnant[0x4]; // 0x18a0            
            bool m_bTriggered; // 0x18a4            
            uint8_t _pad18a5[0x3]; // 0x18a5
            float m_flCurThink; // 0x18a8            
            bool bIsArtifice; // 0x18ac            
            uint8_t _pad18ad[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnantThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_VoidSpirit_AetherRemnantThinker) == 0x18b0);
    };
};
