#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/server/CItem.hpp"

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
        class CScriptItem : public source2sdk::server::CItem
        {
        public:
            source2sdk::client::MoveType_t m_MoveTypeOverride; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CScriptItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CScriptItem) == 0x_);
    };
};
