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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct DynamicVolumeDef_t
        {
        public:
            // m_source has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_source;
            char m_source[0x_]; // 0x_            
            // m_target has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_target;
            char m_target[0x_]; // 0x_            
            std::int32_t m_nHullIdx; // 0x_            
            Vector m_vSourceAnchorPos; // 0x_            
            Vector m_vTargetAnchorPos; // 0x_            
            std::uint32_t m_nAreaSrc; // 0x_            
            std::uint32_t m_nAreaDst; // 0x_            
            bool m_bAttached; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_source) == 0x_);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_target) == 0x_);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_nHullIdx) == 0x_);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_vSourceAnchorPos) == 0x_);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_vTargetAnchorPos) == 0x_);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_nAreaSrc) == 0x_);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_nAreaDst) == 0x_);
        static_assert(offsetof(source2sdk::server::DynamicVolumeDef_t, m_bAttached) == 0x_);
        
        static_assert(sizeof(source2sdk::server::DynamicVolumeDef_t) == 0x_);
    };
};
