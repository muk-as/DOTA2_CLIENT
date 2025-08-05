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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x508
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CGameGibManager : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04e0[0x18]; // 0x4e0
            bool m_bAllowNewGibs; // 0x4f8            
            uint8_t _pad04f9[0x3]; // 0x4f9
            std::int32_t m_iCurrentMaxPieces; // 0x4fc            
            std::int32_t m_iMaxPieces; // 0x500            
            std::int32_t m_iLastFrame; // 0x504            
            
            // Datamap fields:
            // int32_t InputSetMaxPieces; // 0x0
            // int32_t InputSetMaxPiecesDX8; // 0x0
            // void m_LRU; // 0x4e0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameGibManager because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGameGibManager) == 0x508);
    };
};
