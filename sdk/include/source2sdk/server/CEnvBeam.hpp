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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvBeam : public source2sdk::server::CBeam
        {
        public:
            std::int32_t m_active; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_spriteTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_spriteTexture;
            char m_spriteTexture[0x_]; // 0x_            
            CUtlSymbolLarge m_iszStartEntity; // 0x_            
            CUtlSymbolLarge m_iszEndEntity; // 0x_            
            float m_life; // 0x_            
            float m_boltWidth; // 0x_            
            float m_noiseAmplitude; // 0x_            
            std::int32_t m_speed; // 0x_            
            float m_restrike; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszSpriteName; // 0x_            
            std::int32_t m_frameStart; // 0x_            
            VectorWS m_vEndPointWorld; // 0x_            
            Vector m_vEndPointRelative; // 0x_            
            float m_radius; // 0x_            
            source2sdk::server::Touch_t m_TouchType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iFilterName; // 0x_            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFilter;
            char m_hFilter[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszDecal; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnTouchedByEntity; // 0x_            
            
            // Datamap fields:
            // int32_t m_nClipStyle; // 0x_
            // void CEnvBeamStrikeThink; // 0x_
            // void CEnvBeamUpdateThink; // 0x_
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // void InputToggle; // 0x_
            // void InputStrikeOnce; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvBeam) == 0x_);
    };
};
