#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_AetherRemnantThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            Vector m_vFacingDir; // 0x187c            
            std::int32_t pierces_creeps; // 0x1888            
            // m_hRemnant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRemnant;
            char m_hRemnant[0x4]; // 0x188c            
            // m_hPartnerRemnant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPartnerRemnant;
            char m_hPartnerRemnant[0x4]; // 0x1890            
            bool m_bTriggered; // 0x1894            
            uint8_t _pad1895[0x3]; // 0x1895
            float m_flCurThink; // 0x1898            
            bool bIsArtifice; // 0x189c            
            uint8_t _pad189d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnantThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_VoidSpirit_AetherRemnantThinker) == 0x18a0);
    };
};
