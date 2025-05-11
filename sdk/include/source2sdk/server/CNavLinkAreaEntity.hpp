#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Size: 0x580
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CNavLinkAreaEntity : public source2sdk::server::CPointEntity
        {
        public:
            float m_flWidth; // 0x4d8            
            Vector m_vLocatorOffset; // 0x4dc            
            QAngle m_qLocatorAnglesOffset; // 0x4e8            
            uint8_t _pad04f4[0x4]; // 0x4f4
            CUtlSymbolLarge m_strMovementForward; // 0x4f8            
            CUtlSymbolLarge m_strMovementReverse; // 0x500            
            std::int32_t m_nNavLinkIdForward; // 0x508            
            std::int32_t m_nNavLinkIdReverse; // 0x50c            
            bool m_bEnabled; // 0x510            
            uint8_t _pad0511[0x7]; // 0x511
            CUtlSymbolLarge m_strFilterName; // 0x518            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hFilter;
            char m_hFilter[0x4]; // 0x520            
            uint8_t _pad0524[0x4]; // 0x524
            source2sdk::entity2::CEntityIOOutput m_OnNavLinkStart; // 0x528            
            source2sdk::entity2::CEntityIOOutput m_OnNavLinkFinish; // 0x550            
            bool m_bIsTerminus; // 0x578            
            uint8_t _pad0579[0x7];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavLinkAreaEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavLinkAreaEntity) == 0x580);
    };
};
