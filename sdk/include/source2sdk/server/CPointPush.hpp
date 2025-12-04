#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
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
        class CPointPush : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMagnitude; // 0x_            
            float m_flRadius; // 0x_            
            float m_flInnerRadius; // 0x_            
            float m_flConeOfInfluence; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszFilterName; // 0x_            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hFilter;
            char m_hFilter[0x_]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CPointPushPushThink; // 0x_
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointPush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointPush) == 0x_);
    };
};
