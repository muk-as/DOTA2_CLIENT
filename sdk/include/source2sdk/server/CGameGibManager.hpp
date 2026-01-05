#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        class CGameGibManager : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            bool m_bAllowNewGibs; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            std::int32_t m_iCurrentMaxPieces; // 0x_            
            std::int32_t m_iMaxPieces; // 0x_            
            // metadata: MNotSaved
            std::int32_t m_iLastFrame; // 0x_            
            
            // Datamap fields:
            // int32_t InputSetMaxPieces; // 0x_
            // int32_t InputSetMaxPiecesDX8; // 0x_
            // void m_LRU; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameGibManager because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGameGibManager) == 0x_);
    };
};
