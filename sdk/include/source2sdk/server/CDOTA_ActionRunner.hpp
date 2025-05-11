#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct CModifierParams;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Has VTable
        // Is Abstract
        // MDisableDataDescValidation
        #pragma pack(push, 1)
        class CDOTA_ActionRunner
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::CModifierParams* m_pEventContext; // 0x8            
            source2sdk::server::CDOTA_BaseNPC* m_pCaster; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_ActionRunner, m_pEventContext) == 0x8);
        static_assert(offsetof(source2sdk::server::CDOTA_ActionRunner, m_pCaster) == 0x10);
        
        static_assert(sizeof(source2sdk::server::CDOTA_ActionRunner) == 0x18);
    };
};
