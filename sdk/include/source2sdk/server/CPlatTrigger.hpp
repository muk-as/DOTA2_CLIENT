#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CFuncPlat;
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
        // Size: 0x7b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPlatTrigger : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_pPlatform has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CFuncPlat> m_pPlatform;
            char m_pPlatform[0x4]; // 0x7a8            
            uint8_t _pad07ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlatTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlatTrigger) == 0x7b0);
    };
};
