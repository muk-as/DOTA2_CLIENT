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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x508
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointPush : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bEnabled; // 0x4e0            
            uint8_t _pad04e1[0x3]; // 0x4e1
            float m_flMagnitude; // 0x4e4            
            float m_flRadius; // 0x4e8            
            float m_flInnerRadius; // 0x4ec            
            float m_flConeOfInfluence; // 0x4f0            
            uint8_t _pad04f4[0x4]; // 0x4f4
            CUtlSymbolLarge m_iszFilterName; // 0x4f8            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hFilter;
            char m_hFilter[0x4]; // 0x500            
            uint8_t _pad0504[0x4];
            
            // Datamap fields:
            // void CPointPushPushThink; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointPush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointPush) == 0x508);
    };
};
