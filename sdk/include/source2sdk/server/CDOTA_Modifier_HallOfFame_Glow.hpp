#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_HallOfFame_Glow : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_vecGlowingPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PlayerID_t> m_vecGlowingPlayerIDs;
            char m_vecGlowingPlayerIDs[0x18]; // 0x17f8            
            // m_vecGlowingPlayerIDs2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PlayerID_t> m_vecGlowingPlayerIDs2;
            char m_vecGlowingPlayerIDs2[0x18]; // 0x1810            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_HallOfFame_Glow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_HallOfFame_Glow) == 0x1828);
    };
};
