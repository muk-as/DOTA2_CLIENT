#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
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
        // Size: 0x4f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoDynamicShadowHint : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bDisabled; // 0x4d8            
            uint8_t _pad04d9[0x3]; // 0x4d9
            float m_flRange; // 0x4dc            
            std::int32_t m_nImportance; // 0x4e0            
            std::int32_t m_nLightChoice; // 0x4e4            
            // m_hLight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLight;
            char m_hLight[0x4]; // 0x4e8            
            uint8_t _pad04ec[0x4];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoDynamicShadowHint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoDynamicShadowHint) == 0x4f0);
    };
};
