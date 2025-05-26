#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct DynamicVolumeDef_t
        {
        public:
            // m_source has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_source;
            char m_source[0x4]; // 0x0            
            // m_target has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_target;
            char m_target[0x4]; // 0x4            
            std::int32_t m_nHullIdx; // 0x8            
            Vector m_vSourceAnchorPos; // 0xc            
            Vector m_vTargetAnchorPos; // 0x18            
            std::uint32_t m_nAreaSrc; // 0x24            
            std::uint32_t m_nAreaDst; // 0x28            
            bool m_bAttached; // 0x2c            
            uint8_t _pad002d[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_source) == 0x0);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_target) == 0x4);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_nHullIdx) == 0x8);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_vSourceAnchorPos) == 0xc);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_vTargetAnchorPos) == 0x18);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_nAreaSrc) == 0x24);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_nAreaDst) == 0x28);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_bAttached) == 0x2c);
        
        static_assert(sizeof(source2sdk::server::DynamicVolumeDef_t) == 0x30);
    };
};
