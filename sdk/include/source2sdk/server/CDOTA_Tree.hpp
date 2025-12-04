#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CObstructionObject.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CDOTA_Tree : public source2sdk::server::CObstructionObject
        {
        public:
            bool m_bStanding; // 0x_            
            bool m_bSpecialConsume; // 0x_            
            bool m_bSpecialConsumeSameTeamOnly; // 0x_            
            bool m_bSpecialPathing; // 0x_            
            std::int32_t m_iTreePlanterTeam; // 0x_            
            std::uint32_t m_unOccluderID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Tree because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Tree) == 0x_);
    };
};
