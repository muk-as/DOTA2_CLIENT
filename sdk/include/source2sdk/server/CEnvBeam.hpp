#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBeam.hpp"
#include "source2sdk/server/Touch_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x8f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvBeam : public source2sdk::server::CBeam
        {
        public:
            std::int32_t m_active; // 0x848            
            uint8_t _pad084c[0x4]; // 0x84c
            // m_spriteTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_spriteTexture;
            char m_spriteTexture[0x8]; // 0x850            
            CUtlSymbolLarge m_iszStartEntity; // 0x858            
            CUtlSymbolLarge m_iszEndEntity; // 0x860            
            float m_life; // 0x868            
            float m_boltWidth; // 0x86c            
            float m_noiseAmplitude; // 0x870            
            std::int32_t m_speed; // 0x874            
            float m_restrike; // 0x878            
            uint8_t _pad087c[0x4]; // 0x87c
            CUtlSymbolLarge m_iszSpriteName; // 0x880            
            std::int32_t m_frameStart; // 0x888            
            Vector m_vEndPointWorld; // 0x88c            
            Vector m_vEndPointRelative; // 0x898            
            float m_radius; // 0x8a4            
            source2sdk::server::Touch_t m_TouchType; // 0x8a8            
            uint8_t _pad08ac[0x4]; // 0x8ac
            CUtlSymbolLarge m_iFilterName; // 0x8b0            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFilter;
            char m_hFilter[0x4]; // 0x8b8            
            uint8_t _pad08bc[0x4]; // 0x8bc
            CUtlSymbolLarge m_iszDecal; // 0x8c0            
            source2sdk::entity2::CEntityIOOutput m_OnTouchedByEntity; // 0x8c8            
            
            // Datamap fields:
            // int32_t m_nClipStyle; // 0x82c
            // void CEnvBeamStrikeThink; // 0x0
            // void CEnvBeamUpdateThink; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputToggle; // 0x0
            // void InputStrikeOnce; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvBeam) == 0x8f0);
    };
};
