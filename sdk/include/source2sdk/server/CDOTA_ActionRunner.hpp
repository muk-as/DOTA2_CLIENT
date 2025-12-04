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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // MDisableDataDescValidation
        #pragma pack(push, 1)
        class CDOTA_ActionRunner
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CModifierParams* m_pEventContext; // 0x_            
            source2sdk::server::CDOTA_BaseNPC* m_pCaster; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_ActionRunner, m_pEventContext) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_ActionRunner, m_pCaster) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTA_ActionRunner) == 0x_);
    };
};
