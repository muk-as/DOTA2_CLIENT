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
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x28
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CDOTA_Tree : public source2sdk::server::CObstructionObject
        {
        public:
            bool m_bStanding; // 0x18            
            bool m_bSpecialConsume; // 0x19            
            bool m_bSpecialConsumeSameTeamOnly; // 0x1a            
            bool m_bSpecialPathing; // 0x1b            
            std::int32_t m_iTreePlanterTeam; // 0x1c            
            std::uint32_t m_unOccluderID; // 0x20            
            uint8_t _pad0024[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Tree because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Tree) == 0x28);
    };
};
